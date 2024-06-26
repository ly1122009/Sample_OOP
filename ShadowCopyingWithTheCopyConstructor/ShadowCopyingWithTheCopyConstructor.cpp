/**
 * Shadow Copying with the copy constructor
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

/**
 * Shadow class
*/
class Shadow 
{
private:
    /* data */
    int *data;
public:
    void set_data_value(int p_data) {*data = p_data;}
    int get_data_value() {return *data;}

    /* Constructor */
    Shadow (int p_data);
    /* Copy Constructor */
    Shadow (const Shadow &source);
    /* Destructor */
    ~Shadow();
};
/* Constructor */
 Shadow :: Shadow (int p_data)
{
    data = new int; 
    *data = p_data;
}

/* Copy Constructor */
 Shadow :: Shadow (const Shadow &source):data(source.data)
{
    std::cout << "Copy constructor - shadow copy" << std::endl;
}

/* Destructor */
Shadow :: ~Shadow()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_Shadow(Shadow p_obj)
{
    std::cout << "Value of pointer:  " << p_obj.get_data_value() << std::endl;
}



int main()
{
    Shadow obj1 {100};
    display_Shadow(obj1);   

    Shadow obj2 {obj1};
    display_Shadow(obj2);
    obj2.set_data_value(400); // Khi thay đổi data of obj2, vô tình nó làm thay đổi luôn data của obj1(vì cả 2 đều trỏ đến 1 vùng nhớ)
                              
    display_Shadow(obj2);
}
/**
 * Shadow copy Là một copy constructor sao chép một con trỏ 
 * Giá trị của con trỏ được lưu trong bộ nhớ head. Khi delete thì quyền quản lí bộ nhớ head được trao lại cho hđh
 * Lúc này, con trỏ sẽ trỏ vào vùng bộ nhớ không hợp lệ.
 * Khi tạo lại obj2, thì con trỏ sẽ trỏ lại vùng nhớ có giá trị 100.
 * Không sử dụng shadow copy cho class chứa con trỏ. Nên sử dụng deep copy
 * 
*/