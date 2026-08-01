









using ConApp_02;
using static ConApp_02.RectangleHelper;

RectangleHelper helper = new RectangleHelper();

//helper.GetArea(10, 10);
//helper.GetPerimeter(10, 10);

RectDelegate rect;
rect = helper.GetArea;
rect += helper.GetPerimeter;

rect(10, 10);

rect -= helper.GetPerimeter;

rect(10, 10);

Console.ReadKey();


