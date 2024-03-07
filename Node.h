
/**
 * @brief Node Class
 * 
 * @tparam T The type of data stored in the node
 * 
 * @note You need to convert this Node class to take in a generic template type T for data.
 */
class Node {
    public:
        int data;
        Node *next;
        
        Node(int newData) {
            data = newData;
            next = nullptr;
        }
};
