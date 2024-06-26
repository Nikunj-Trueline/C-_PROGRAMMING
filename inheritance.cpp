/*

inheritance in c++ programming.

1. single level inheritance
2. multi-level inheritance
3. multiple inheritance
4. hiricghichal inheritance
5. hybrid inheritance.

parent             super               base
   |                 |                   |
child               sub                derived

Modes for inheritance

1. public
2. private
3. protected

*/

// single level ineheritance

class RBI
{

public:
    void rbi()
    {
    }
};

class HDFC : public RBI
{

public:
    void hdfc()
    {
    }
};

// multilevel inheritance

class PRINCIPLE
{
public:
    void principle()
    {
    }
};

class TEACHER : public PRINCIPLE
{
public:
    void teacher()
    {
    }
};

class STUDENT : public TEACHER
{

public:
    void student()
    {
    }
};

// multiple ineritance

class FRONTEND
{

public:
    void html()
    {
    }

    void css()
    {
    }

    void javaScript()
    {
    }
};

class BACKEND
{

public:
    void node()
    {
    }

    void expressjs()
    {
    }
};

class FULLSTACK : public FRONTEND, private BACKEND
{

public:
};

// hirichical inheritance

class FOUNDER
{

public:
};

class MD : public FOUNDER
{
public:
};

class CEO : public FOUNDER
{
public:
};

int main()
{

    HDFC obj;

    obj.rbi();
    obj.hdfc();
}