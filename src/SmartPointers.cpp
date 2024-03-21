#include <iostream>
#include <string>

#include <memory> // smart pointers
// Smart Pointers automate the new and delete process
// They are a wrapper around a real pointer

// unique_ptr is a scoped pointer
// When it leaves scope, it will get destroyed and call delete
// Can't copy a unique pointer

// shared_ptr uses reference counting
// It counts how many pointers are referencing the address
// When the reference count reaches 0 it will delete itself

//class Entity
//{
//public:
//    Entity() {
//        std::cout << "Created Entity!" << std::endl;
//    }
//    ~Entity() {
//        std::cout << "Destroyed Entity!" << std::endl;
//    }
//
//    void Print() {}
//};

//int main()
//{   
//    {
//        std::shared_ptr<Entity> sE2;
//        {
//            // std::unique_ptr<Entity> entity(new Entity());
//            // preffered way to init a unique_ptr because of exception safety
//            std::unique_ptr<Entity> entity = std::make_unique<Entity>();
//
//            // shared+ptr needs to allocate another block of memory called a control block
//            // this stores the share count. Using new does 2 constructions, this only does 1
//            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//            // Assigning a shared pointer to a weak pointer won't increase the ref count
//            std::weak_ptr<Entity> weakEntity = sharedEntity;
//            sE2 = sharedEntity;
//
//            // can be copied
//
//            entity->Print();
//        }
//    }
//
//    std::cin.get();
//}




