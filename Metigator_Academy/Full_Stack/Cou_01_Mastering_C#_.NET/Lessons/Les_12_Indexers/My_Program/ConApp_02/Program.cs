

using ConApp_02;

BookCollection booksCol = new BookCollection();

booksCol[0] = new Book() { Title = "Harry Potter", Author = "Author_01" };
booksCol[1] = new Book() { Title = "Lord of the rings", Author = "Author_02" };

Console.WriteLine(booksCol[0].Title);

Console.WriteLine(booksCol["Lord of the rings"].Author);

Console.ReadKey();