namespace ConApp_02
{
    internal class BookCollection
    {
        private Book[] books = new Book[3];

        // Indexer.
        public Book this[int index]
        {
            get
            {
                return books[index];
            }
            set
            {
                books[index] = value;
            }
        }

        public Book this[string title]
        {
            get
            {
                foreach (var book in books)
                {
                    if (book.Title == title)
                    {
                        return book;
                    }
                }

                return null;
            }
            set
            {
                for (int i = 0; i < books.Length; i++)
                {
                    if (books[i].Title == title)
                    {
                        books[i] = value;
                        return;
                    }
                }

                throw new InvalidOperationException("Book not found");
            }
        }

    }
}
