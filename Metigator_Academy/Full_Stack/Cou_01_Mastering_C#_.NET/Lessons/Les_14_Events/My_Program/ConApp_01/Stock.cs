namespace ConApp_01
{
    public class Stock
    {
        private string _Name;
        private decimal _Price;

        public string Name => this._Name;
        public decimal Price { get => this._Price; set => this._Price = value; }

        public Stock(string stockName)
        {
            this._Name = stockName;
        }

        public delegate void StockPriceChangeHandler(Stock stock, decimal oldPrice);
        public event StockPriceChangeHandler OnPriceChanged;

        public void ChangeStockPriceBy(decimal percent)
        {
            decimal oldPrice = this._Price;
            this._Price += Math.Round(this._Price * percent, 2);

            if (OnPriceChanged != null) // Make sure there is subscriber.
            {
                OnPriceChanged(this, oldPrice); // Firing Event.
            }
        }


    }
}




