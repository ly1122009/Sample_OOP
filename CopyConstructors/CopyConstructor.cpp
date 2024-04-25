/**
 *Copy constructors in OOP
*/

#include <iostream>

class Player
{
private:
    /* data */
    std::string name;
    int health;
    int xp;

public:
    std::string get_name(void);
    int get_health();
    int get_xp();
    void set_name(std::string p_name);
    
    /* Constructors */
    Player(std::string p_name = "None", int p_health = 100, int p_xp = 0);
    /* Copy Constructors */
    Player(const Player &source);    // Source doesnt really matter. 
    /* Destructor */ 
    ~Player() {std::cout << "Destructor called for: " << name << std::endl;}
};

std::string Player::get_name(void)          {return Player::name;}

int Player::get_health(void)                {return Player::health;}

int Player::get_xp(void)                    {return Player::xp;}

void Player::set_name(std::string p_name)   {name = p_name;}

/* Constructor */
Player::Player(std::string p_name, int p_health, int p_xp)
    : name{p_name}, health{p_health}, xp{p_xp}{}

/* Copy constructor */
Player::Player(const Player &source)
    : name (source.name), health(source.health), xp(source.xp){std::cout << "Copy constructor - made copy of: " << source.name << std::endl;}

void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main()
{
    Player empty;
    display_player(empty); // Two difference of objects but they have the same values right now.
    /* Destruction will be call 2 time, the first time here to delete copy_empty object */
    
    return 0;
    /* The second time is here to delete empty object */
}
/**
 * Remember, the default mode of passing data in C++ is by value, which means a copy is made (used when we dont provide a copy constructor)
 * Have to always provide user-defined copy constructor. If you're using raw pointers.
 * Always implement(thực hiện) the copy constructor with a const reference parameter.
*/
/**
 * Why by reference and constant? First, if we pass it in by value, then we have to make a copy of it. That's the whole point(toàn bộ quan điểm) of the copy constructor
 * Nó sẽ tạo ra một bản sao của nó. => Nó sẽ làm hỏng mục đích và kết thúc với những cuộc gọi đệ quy không bao giờ kết thúc.
 * Và như một hằng số vì ngữ nghĩa của việc sao chép chính là chúng tôi sao chép chuỗi nguồn và không sửa đổi nó => Const ngăn chặn mọi sửa đổi source
*/
/**
 * Hàm tạo bản sao objects có tác dụng tạo một object mới từ một object hiện có.
 * Hàm bản sao (a copy constructor).
 * Ví dụ khi sử dụng truyền tham trị cho một function của một object như một parameter. Lúc này we need to make a copy of that object
 * The same is true (Điều này cũng đúng) when we return an object by value from a function or method. 
 * And the last common use case(Và điều cuối cùng) là khi muốn xây dựng một đối tượng dựa trên một đối tượng hiện có của cùng một lớp thì C++ sử dụng hàm tạo bản sao để làm điều này
 * Nếu ta không provide a copy constructor, the C++ compiler will provide a compiler generated one. 
 * Nếu sử dụng con trỏ thì con trỏ sẽ được sao chép chứ không phải dữ liệu.
*/