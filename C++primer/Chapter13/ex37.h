//
// Chapter13 Exericse37
//

#ifndef EX37_H
#define EX37_H

#include <string>
#include <set>

class Folder;

class Message {
	friend class Folder;
    friend void swap(Message&, Message&);
    friend void swap(Folder &, Folder &);
    
public:
	explicit Message(const std::string &str = ""):
		contents(str) { }
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	
	void save(Folder&);
	void remove(Folder&);

private:
	std::string contents;
	std::set<Folder*> folders;
	
	void add_to_Folders(const Message&);
	void remove_from_Folders();
	
	void addFldr(Folder *f) { folders.insert(f); }
    void remFldr(Folder *f) { folders.erase(f); }
};


class Folder {
	friend class Message;
    friend void swap(Message&, Message&);
    friend void swap(Folder &, Folder &);
    
public:
	Folder() = default;
	Folder(const Folder&);
    Folder& operator=(const Folder &);
    ~Folder();
    
private:
	std::set<Message*> msgs;
	
    void add_to_Message(const Folder&);
    void remove_to_Message();

    void addMsg(Message *m) { msgs.insert(m); }
    void remMsg(Message *m) { msgs.erase(m); }
};



// Message Member
void Message::save(Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}

void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.remMsg(this);
}

void Message::add_to_Folders(const Message &m)
{
	for (auto f : m.folders)
		f->addMsg(this);
}

void Message::remove_from_Folders()
{
	for (auto f : folders)
		f->remMsg(this);
}

Message::Message(const Message &m):
	contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}

Message::~Message()
{
	remove_from_Folders();
}

Message& Message::operator=(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folders(rhs);
	return *this;
}


// Folder Member
Folder::Folder(const Folder &f)
{
	for (auto m : f.msgs)
		m->addFldr(this);
}

Folder::~Folder()
{
    remove_to_Message();
}

Folder& Folder::operator =(const Folder &rhs)
{
    remove_to_Message();
    msgs = rhs.msgs;
    add_to_Message(rhs);
    return *this;
}

void Folder::add_to_Message(const Folder &f)
{
    for (auto m : f.msgs)
        m->addFldr(this);
}

void Folder::remove_to_Message()
{
    for (auto m : msgs)
        m->remFldr(this);
}


// Swap
void swap(Message &lhs, Message &rhs)
{
	using std::swap;
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);

    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);

    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}

void swap(Folder &lhs, Folder &rhs)
{
	using std::swap;
	for (auto m : lhs.msgs)
		m->remFldr(&lhs);

	for (auto m : rhs.msgs)
		m->remFldr(&rhs);

	swap(lhs.msgs, rhs.msgs);

	for (auto m : lhs.msgs)
		m->addFldr(&lhs);

	for (auto m : rhs.msgs)
		m->addFldr(&rhs);
}

#endif
