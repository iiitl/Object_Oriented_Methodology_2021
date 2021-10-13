#ifndef __Compressor
#define __Compressor

#define SMALL 0.5
#define LARGE 3

namespace example
{
	class Compressor
	{
		private:
			float capacity;

		public:
			Compressor(float);
			Compressor(Compressor&);
			void switch_on();
			void switch_off();
	};
}

#endif
