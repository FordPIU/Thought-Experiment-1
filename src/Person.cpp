class Person
{
public:
    Person(Person *parent1, Person *parent2)
    {
        // Error Handling

        //  Could've made this and the next one 1 big function, but I thought it would look ugly.
        if (parent1 == nullptr && parent2 != nullptr)
        {
        }

        if (parent1 != nullptr && parent2 == nullptr)
        {
        }

        // Default Handler
        if (parent1 == nullptr && parent2 == nullptr)
        {
        }
        // Parent Handler
        else
        {
        }
    }

private:
    bool isOriginal;
    
};