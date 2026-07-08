


Animal animal_01 = new Animal();
animal_01.animalName = "Animal 01";
animal_01.animalLifeSpan = 3;
Console.WriteLine($"Animal Name: {animal_01.animalName}");
Console.WriteLine($"Animal Life Span: {animal_01.animalLifeSpan}");

Console.WriteLine("-------------------------------------------");

Animal.Dog dog_01 = new Animal.Dog();
dog_01.dogBreed = "German";
dog_01.dogIntelligence = 7;
Console.WriteLine($"Dog Breed: {dog_01.dogBreed}");
Console.WriteLine($"Dog Intelligence: {dog_01.dogIntelligence}");

Console.WriteLine("-------------------------------------------");

Animal.Cat cat_01 = new Animal.Cat();
cat_01.catBreed = "Any Thing";
cat_01.catIntelligence = 3;
Console.WriteLine($"Cat Breed: {cat_01.catBreed}");
Console.WriteLine($"Cat Intelligence: {cat_01.catIntelligence}");

Console.WriteLine("-------------------------------------------");

Console.ReadKey();



public class Animal
{
    public string animalName { get; set; }

    public int animalLifeSpan { get; set; }

    public class Dog
    {
        public string dogBreed { get; set; }
        public int dogIntelligence { get; set; }
    }

    public class Cat
    {
        public string catBreed { get; set; }
        public int catIntelligence { get; set; }
    }
}
