
Dog dog_01 = new Dog();

dog_01.AnimalName = "lala";
dog_01.AnimalAge = 6;
dog_01.DogBreed = "Germen";


Console.ReadKey();

class Dog : Animal
{
    public string DogBreed { get; set; }
}

class Animal
{
    public string AnimalName { get; set; }
    public int AnimalAge { get; set; }

}