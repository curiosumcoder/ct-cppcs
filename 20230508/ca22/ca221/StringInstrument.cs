using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ca221
{
    internal class StringInstrument : MusicalInstrument, IPluckable
    {
        public string stringsType { get; set; } = "";

        public override void Pause()
        {
            throw new NotImplementedException();
        }
    }
}
