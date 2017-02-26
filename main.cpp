//
//  main.cpp
//  string初学
//
//  Created by 郭悟清 on 2017/2/21.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    //
    //字符串的复制
    string s1("cat"),s3;
    s3.assign(s1);//全部复制
    string s2("catpig");
    s3.assign(s2,1,3);//从s2中下标为1的字符开始复制3个字符给s3
    s2[5]=s1[3]='a';//单个字符复制
    //
    //at()函数
    string s4("Hello");
    for(int i=0;i<s4.length();i++)
        cout<<s4.at(i)<<endl;//成员函数at会做范围检查，如果超过范围，会抛出out_of_range异常，而下标运算符不会做范围检查
    //
    //字符串的连接,append()函数可以部分复制字符串
    string s5("good"),s6("moring!");
    s5+=s6;//用+运算符连接字符串
    cout<<s5;
    string s7("good"),s8("moring!");
    s7.append(s8);//用append连接字符串
    cout<<s7;
    s8.append(s7,3,s7.size());//下标为3开始，s7.size()个字符，若没有足够字符，则复制到最后一个字符
    cout<<s8;
    //
    //子串
    string s9("hello world"),s10;
    s10=s9.substr(4,5);//下标4开始5个字符
    cout<<s10<<endl;
    //
    //寻找string中的字符
    s9.find("lo");//在s9中从前向后查找“lo“此一次出现的地方：若找到返回l所在的下标，否则返回静态常量string::npos(一个常数)
    s9.rfind("lo");//在s9中从后向前查找......
    s9.find_first_of("abcd");//在s9中从前向后查找"abcd"中任何一个字符第一次出现的地方：若找到返回找到字母的位置，否则返回string::npos
    s9.find_last_of("abcd");//在s9中从后向前查找......
    s9.find_first_not_of("abcd");//在s9中从前向后查找不在"abcd"中的字母第一次出现的地方：若找到返回找到字母的位置，否则返回string::npos
    s9.find_last_not_of("abcd");//在s9中从后向前查找......
    cout<<s9.find("ll",1)<<endl;//从下标1开始查找"ll"，输出为2
    cout<<s9.find("ll",3)<<endl;//从下标3开始查找"ll",输出为9
    //
    //替换string中的字符
    string s11("hello world");
    s11.replace(2,3,"haha");//将下标2开始的三个字符换成"haha"（注意后面的字符会顺延），输出为hehaha world
    cout<<s11<<endl;
    string s12("hello world");
    s12.replace(2,3,"haha",1,2);//将下标2开始的三个字符换成“haha”中下标1开始的2个字符，输出为heah world
    cout<<s12<<endl;
    string s13("hello world");
    s13.erase(5);//去掉下标5及以后的字符,输出为hello
    cout<<s13<<endl;
    //
    //插入字符
    string s14("hello world");
    string s15("show insert");
    s14.insert(5,s15);//将s15插入s14下标5的位置，输出为helloshow insert world
    cout<<s14<<endl;
    s14.insert(2,s15,5,3);//将s15中下标5开始的三个字符插入s14下标2的位置，输出为heinslloshow insert world
    cout<<s14<<endl;
    return 0;
}
