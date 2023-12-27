#include<iostream>
using namespace std;

void createSnake();
void createRabbit();
void createBear();
void give_food();

class Animal
{
public:
    string name;
    int weight;
    bool sleepy;
    string color;
    int height;

    Animal(string name, int weight, string color, int height){
    this->name = name;
    this->weight = weight;
    this->color = color;
    this->height = height;
    this->sleepy = 0;
    }
    ~Animal(){
    cout<<"You've sold this poor creature";
    }

    void sleep()
    {
        bool sleepy = 1;
    }
    void awake()
    {
        bool sleepy = 0;
    }
    void is_sleepy()
    {
        if (sleepy = 1)
            cout<<"Animal is sleeping now";
        else
            cout<<"Animal doesn't sleep";
    }

    void feed()
    {
        cout<<"The animal is eating now...";
        this->weight+=1;
        cout<<"The animal now weights "<<this->weight<<" kg";
    }
};

class Snake: public Animal
{
public:
    int claws;
    Snake(string name, int weight, string color, int height, int claws):Animal(name, weight, color, height)
    {
        this->claws = claws;
    }
    ~Snake()
    {
        cout<<"The snake was deported into another zoo... Pity";
    }
    void go()
    {
        cout<< this->name<<" goes somewhere somehow";
    };
    void is_sleepy()
    {
        cout<< "Snakes never sleep; they can only relax for a short time";
    };
};

class Rabbit: public Animal
{
public:
    int ears;
    Rabbit(string name, int weight, string color, int height, int ears):Animal(name, weight, color, height)
    {
        this->ears = ears;
    };
    ~Rabbit()
    {
        cout<<"The snake was deported into another zoo... Pity";
    }
    void go()
    {
        cout<<"The rabbit runs away from you as far as he can";
    }
    void feed(string food)
    {
        cout<<"The rabbit eats your "<<food<<" and seems happy";
        this->weight+=1;
        cout<<"The rabbit now weights "<<this->weight;
    }
};

class Bear: public Animal
{
public:
    bool agression;
    Bear(string name, int weight, string color, int height, bool agression):Animal(name, weight, color, height)
    {
        this->agression = agression;
    };
    ~Bear()
    {
        cout<<"The snake was deported into another zoo... Pity";
    }
    void go()
    {
        cout<< "The animal runs after you with an angry roar";
    }
    void feed(int kg_of_food)
    {
        if(kg_of_food < 50)
            cout<<"The animal ate your food with pleasant";
        else
            cout<<"The animal ate everything to your biggest surprise";
    }
};

int main()
{
    Snake yourSnake;
    Rabbit yourRabbit;
    Bear yourBear;

    while (true)
    {
        int command;
        cout<<"What do you want to do?"<<"/n"<<"1 - create a new animal; 2 - give animal food; /n etc";
        cin>>command;
        switch (command)
        {
        case 1:
            int animal_type;
            cout<<"What animal do you want to receive? /n 1 - snake, /n 2 - rabbit, /n 3 - bear";
            cin>>animal_type;
            if (animal_type = 1)
                createSnake(yourSnake);
            else if (animal_type = 2)
                createRabbit();
            else if (animal_type = 3)
                createBear();
            else
                cout<<"Wrong command...";
        case 2:
            give_food();
        }
        if (command = 10)
            break;
    }
}

void createSnake(Snake &yourSnake)
{
    string name;
    int weight;
    string color;
    int height;
    int claws;
    cout<<"Enter the new name for the snake: ";
    cin>>name;
    cout<<"Enter the weight of "<<name<<": ";
    cin>>weight;
    cout<<"Enter the color of "<<name<<": ";
    cin>>color;
    cout<<"Enter the height of "<<name<<": ";
    cin>>height;
    cout<<"Enter the size of "<<name<<"\'s claws: ";
    cin>>claws;
    yourSnake = Snake(name, weight, color, height, claws);
}

void createRabbit(Rabbit &yourRabbit)
{
    string name;
    int weight;
    string color;
    int height;
    int ears;
    cout<<"Enter the new name for the rabbit: ";
    cin>>name;
    cout<<"Enter the weight of "<<name<<": ";
    cin>>weight;
    cout<<"Enter the color of "<<name<<": ";
    cin>>color;
    cout<<"Enter the height of "<<name<<": ";
    cin>>height;
    cout<<"Enter the size of "<<name<<"'s ears: ";
    cin>>ears;
    yourRabbit = Rabbit(name, weight, color, height, ears);
}

void createBear(Bear &yourBear)
{
    string name;
    int weight;
    string color;
    int height;
    bool agression;
    cout<<"Enter the new name for the animal: ";
    cin>>name;
    cout<<"Enter the weight of "<<name<<": ";
    cin>>weight;
    cout<<"Enter the color of "<<name<<": ";
    cin>>color;
    cout<<"Enter the height of "<<name<<": ";
    cin>>height;
    cout<<"Is "<<name<<" very agressive?";
    cin>>agression;
    yourBear = Bear(name, weight, color, height, agression);
}

void give_food()
{
    int animal_number;
    cout<<"What animal do you want to feed? /n 1 - snake, /n 2 - rabbit, /n 3 - bear";
    cin>>animal_number;
    switch(animal_number)
    {
    case 1:
        yourSnake.feed();
        break;
    case 2:
    {
        string food;
        cout<<"What food will you give him?";
        cin>>food;
        yourRabbit.feed(food);
        break;
    }
    case 3:
    {
        int food;
        cout<<"How many kg of food will you give?";
        cin>>food;
        yourBear.feed(food);
        break;
    }
    }
}
