#ifndef _FIND_
#define _FINE_

namespace _find {

	template <class T,class D>
	inline bool find (T left,T right,D ch) {
		while (left < right) {
			if (*left == ch)
				return true;
			++left;
		}
		return false;
	}
}

#endif
