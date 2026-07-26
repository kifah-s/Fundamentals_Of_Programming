namespace ConApp_01
{
    public class IP
    {
        private int[] _Segments = new int[4];

        public IP(int seg_01, int seg_02, int seg_03, int seg_04)
        {
            _Segments[0] = seg_01;
            _Segments[1] = seg_02;
            _Segments[2] = seg_03;
            _Segments[3] = seg_04;
        }

        //public string Address
        //{
        //    get
        //    {
        //        return string.Join(".", _Segments);
        //    }
        //}
        public string Address => string.Join(".", _Segments);


        // Indexer.
        public int this[int index]
        {
            get
            {
                return _Segments[index];
            }
            set
            {
                _Segments[index] = value;
            }
        }
    }
}
