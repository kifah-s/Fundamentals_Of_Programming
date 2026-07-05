//Console.WriteLine("Default Constructor.");
//Enemy zombie = new Enemy();
//Console.WriteLine($"Zombie Health: {zombie.EnemyHealth}");


//Console.WriteLine("Parameterized Constructor.");
//Enemy zombie = new Enemy("Zombie 01", 100);
//Console.WriteLine($"Zombie Name: {zombie.EnemyName}");
//Console.WriteLine($"Zombie Health: {zombie.EnemyHealth}");


//Console.WriteLine("Copy Constructor.");
//Enemy zombie_01 = new Enemy("Zombie 01", 100);
//Console.WriteLine($"Zombie Name: {zombie_01.EnemyName}");
//Console.WriteLine($"Zombie Health: {zombie_01.EnemyHealth}");


//Enemy zombie_02 = new Enemy(zombie_01);
//Console.WriteLine($"Zombie Name: {zombie_02.EnemyName}");
//Console.WriteLine($"Zombie Health: {zombie_02.EnemyHealth}");


//Console.WriteLine("Private Constructor.");
////Counter ct = new Counter();
//Counter.currentCount = 20;
//Counter.IncrementCount();
//Console.WriteLine($"Current Counter: {Counter.currentCount}");


Console.WriteLine("Static Constructor.");
Enemy zombie_01 = new Enemy();
Enemy zombie_02 = new Enemy();
Enemy zombie_03 = new Enemy();

Console.ReadKey();

public class Enemy
{
    public int EnemyID { get; set; }
    public string EnemyName { get; set; }
    public double EnemyHealth { get; set; }

    static int staticCounter = 0;
    static int instanceCounter = 0;


    //public Enemy()
    //{
    //    Console.WriteLine("New enemy is created.");
    //    EnemyHealth = 100;
    //}

    //public Enemy(string name, double health)
    //{
    //    EnemyName = name;
    //    EnemyHealth = health;
    //}

    //public Enemy(string name, double health)
    //{
    //    EnemyName = name;
    //    EnemyHealth = health;
    //}

    //public Enemy(Enemy enemy)
    //{
    //    EnemyName = enemy.EnemyName;
    //    EnemyHealth = enemy.EnemyHealth;
    //}


    static Enemy()
    {
        staticCounter++;
        Console.WriteLine($"Static constructor is called {staticCounter}");
    }

    public Enemy()
    {
        instanceCounter++;
        Console.WriteLine($"Instance constructor is called {instanceCounter}");
    }


}


//public class Counter
//{
//    public static int currentCount;

//    private Counter()
//    {
//        // Prevent the creation of objects from the class.
//    }

//    public static int IncrementCount()
//    {
//        return currentCount++;
//    }
//}