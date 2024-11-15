//! \brief Структура узла двусвязного списка
struct Node
{
	//! \brief Данные узла
	int Data;

	//! \brief Указатель на предыдущий узел
	Node* Prev;

	//! \brief Указатель на следующий узел
	Node* Next;

	//! \brief Конструктор для узла
	Node(int value) : Data(value), Prev(nullptr), Next(nullptr) {}
};