/**
 * OOP in C++
*/
#include<iostream>
#include<vector>
#include<string>

// Declaring Class_name
class Class_name
{
    // define the structure and behavior of our class

};

/**
 * Sample class 1
*/
class Player
{
    // atributes (thuộc tính)
    std::string name;
    int health;
    int mana;
    int xp;

    // methods (phương thức)
    void talk(std::string p_text_to_say);
    bool is_dead();
};

/**
 * Create objects 1
*/
Player frank;
Player hero;

// Player *enemy = new Player();
// delete enemy;


/**
 * Sample class 2
*/
class Account
{
    // attributes (thuộc tính)
    std::string name;
    float balance;

    // methods (phương thức)
    bool withdraw_state(float p_amount);
    bool deposit_state(float p_amount);
};

/**
 * Create objects 2
*/
Account frank_account;
Account jim_account;

Account accounts[] {frank_account, jim_account};    

std::vector<Account> accounts1 {frank_account};
accounts1.push_back(jim_account);

Account *mary_account = new Account();
delete mary_account;

int main()
{

    return 0;
} 
/**
 * Procedural programming is pretty much what we've been doing up to this point in the course. (Lập trình thủ tục)
 * Trọng tâm của lập trình thủ tục là hàm. Modlue hóa các chương trình bằng cách tạo nhiều hàm, mỗi hàm chỉ định một quy trình hoặc một hành động của chương trình.
 * => Vì vậy, các chương trình thủ tục về cơ bản là một tập hợp các hàm (So procedural programs are basically a collection of functions).
 * One of the limitations with procedural programming is that the functions need to know about the structure of the data
*/
/**
 * What is OOP about?
 * Hướng đối tượng (Object-Oriented Programming) là việc mô hình hóa phần mềm theo các lớp và đối tượng.
 * For example: Objects and Class:
 *      Objects: Frank
 *      Class: Sinh viên.
 * The fact that objects contain data and operations that work on that data is called encapsulation (đóng gói)
 * Information-hiding: Giúp ẩn đi implementation-specific logic (logic triển khai cụ thể) -> một khái niệm cực kì mạnh mẽ vì cho phép cung cấp giao diện công khai cho lớp và ẩn mọi thứ khác không cần thiết
 * =>   Giúp hạn chế sinh ra lỗi khi dùng.
 * Reusability (Tái sử dụng): Có thể sử dụng lại class với những chương trình khác vì được đóng gói theo dạng module
 * Inheritance (Kế thừa): Dễ dàng cập nhập, chỉnh sửa các lớp hiện có bằng cách thay đổi các thành phần cần thiết để tạo một class mới.
*/
/**
 * What is Class
 * Class: đơn giản là bản thiết kế mà từ đó các đối tượng được tạo ra. Các class là các loại do người dùng định nghĩa. Mục tiêu là đơn giản hóa các vật thể trừu tượng để programer có thể sử dụng chúng giống như sử dụng số nguyên, ...
 * Class cũng có các hàm, được gọi là phương thức (methods)
 * Class có thể ẩn dữ liệu và phương thức chỉ được class sử dụng nội bộ.
 * Mục tiêu của class là cung cấp một giao diện chung được xác định rõ ràng. Giúp người dùng class đó có thể dễ dàng sử dụng.
*/
/**
 * What is Objects
 * Objects được tạo ra từ các lớp và đại diện cụ thể của lớp mà chúng được tạo ra.
 * Mỗi object có thể sử dụng các phương thức được xácc định trong class.
 * Objects có thể được sử dụng như bất kỳ biến nào trong C++
*/
