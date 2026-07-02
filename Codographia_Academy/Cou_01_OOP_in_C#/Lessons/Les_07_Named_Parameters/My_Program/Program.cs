

DisplayPlayerInfo(10, "Messi");

//DisplayPlayerInfo("Messi", 10); //Error

DisplayPlayerInfo(playerName: "Messi", playerNum: 10);


Console.ReadKey();

static void DisplayPlayerInfo(int playerNum, string playerName)
{
    Console.WriteLine(playerNum);
    Console.WriteLine(playerName);
}