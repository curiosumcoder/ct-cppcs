using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ca221
{
    internal abstract class MusicalInstrument : InstrumentBase
    {
        public override void Play()
        {
            Console.WriteLine($"Playing {this.name}...\n");
        }

        public override void Stop()
        {
            Console.WriteLine($"Stoping {this.name}...\n");
        }

        public abstract void Pause();
    }
}
