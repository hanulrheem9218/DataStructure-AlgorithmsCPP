#pragma once
template <typename E>
struct SNode {
	E elem;
	SNode<E>* next;
};