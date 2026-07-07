

Dog dog = new Dog();
dog.publicVariable = "Public Variable";
dog.internalVariable = "Internal Variable";


Console.ReadKey();


class Dog : Animal
{
    void FeedDog()
    {
        protectedVariable = "Protected Variable";
    }
}

class Animal
{
    public string publicVariable;
    private string privateVariable;
    protected string protectedVariable;
    internal string internalVariable;

    void FeedAnimal()
    {
        privateVariable = "Private Variable";
    }

}