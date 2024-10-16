// El valor del hijo izquierdo es menor que el valor del nodo
// El valor del hijo derecho es mayor que el valor del nodo
#include "BinaryTree.h"

int main() {

    BinaryTree tree;

    // Insertar valores en el árbol
    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    cout << "Recorrido Inorden: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    cout << "Recorrido Preorden: ";
    tree.preOrderTraversal(tree.root);
    cout << endl;

    cout << "Recorrido Postorden: ";
    tree.postOrderTraversal(tree.root);
    cout << endl;

    // Buscar un valor en el árbol
    int searchValue = 40;
    if (tree.search(tree.root, searchValue)) {
        cout << "Valor " << searchValue << " encontrado en el árbol." << endl;
    } else {
        cout << "Valor " << searchValue << " no encontrado en el árbol." << endl;
    }

    // Eliminar un valor
    tree.root = tree.remove(tree.root, 20);
    cout << "Recorrido Inorden después de eliminar 20: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    return 0;
}