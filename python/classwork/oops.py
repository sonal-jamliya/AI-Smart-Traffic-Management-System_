class Book:
    def __init__(self, title, author):
        self.title = title
        self.author = author
        self.is_available = True

    def borrow_book(self):
        if self.is_available:
            self.is_available = False
            print(f'"{self.title}" has been borrowed.')
        else:
            print(f'"{self.title}" is not available.')

    def return_book(self):
        self.is_available = True
        print(f'"{self.title}" has been returned.')


class Member:
    def __init__(self, name, member_id):
        self.name = name
        self.member_id = member_id
        self.borrowed_books = []

    def borrow(self, book):
        if book.is_available:
            book.borrow_book()
            self.borrowed_books.append(book)
            print(f'{self.name} borrowed "{book.title}".')
        else:
            print(f'{self.name} cannot borrow "{book.title}" (not available).')

    def return_item(self, book):
        if book in self.borrowed_books:
            book.return_book()
            self.borrowed_books.remove(book)
            print(f'{self.name} returned "{book.title}".')
        else:
            print(f'{self.name} does not have "{book.title}".')