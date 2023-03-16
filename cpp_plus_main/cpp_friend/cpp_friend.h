//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";
#include "string"
using namespace std;

#ifndef CPPLEARNING_CPP_FRIEND_H
#define CPPLEARNING_CPP_FRIEND_H

//
class cpp_friend {

};
class  BRoom;
//成员函数做友元
class  member_function{

public:
    member_function();
    void member_can_visit();
    void member_cannot_visit();
    BRoom * bRoom;
};

class  BRoom{
   //类友元
   friend class  visiter;
   //全局函数友元
   friend void visitRoom(BRoom & room);
   //成员函数 友元
   friend void  member_function::member_can_visit();

public:
    BRoom(){
        m_sittingroom="客厅";
        m_bedroom = "卧室";
    }
    string  m_sittingroom;
private:
    string  m_bedroom;
};

void visitRoom(BRoom &room){
    cout << "sitting room "<< room.m_sittingroom << endl;
}


// 类做友元
class visiter {
public:
    visiter(){bRoom = new BRoom();}
    void visitRoom(){
         cout << "visiter room "<< bRoom->m_bedroom << endl;
    };
    BRoom * bRoom;

};

member_function::member_function() {
    bRoom = new BRoom();
}

void member_function::member_can_visit() {
     cout << "mem visit  "<< bRoom->m_sittingroom << endl;
     cout << "mem visit "<<  bRoom->m_bedroom<< endl;
}


void member_function::member_cannot_visit() {
    cout << "mem visit  "<<  bRoom->m_sittingroom << endl;
}

#endif //CPPLEARNING_CPP_FRIEND_H




















