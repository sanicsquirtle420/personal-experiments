import unittest
from Vehicle import *

class Tests(unittest.TestCase):
    def test_color(self):
        test = Vehicle("a", "b", "c", 123)
        result = Vehicle.get_color(test)
        self.assertEqual(result, "a")

    def test_make(self):
        test = Vehicle("a", "b", "c", 123)
        result = Vehicle.get_make(test)
        self.assertEqual(result, "b")

    def test_model(self):
        test = Vehicle("a", "b", "c", 123)
        result = Vehicle.get_model(test)
        self.assertEqual(result, "c")

    def test_cost(self):
        test = Vehicle("a", "b", "c", 123)
        result = Vehicle.get_cost(test)
        self.assertEqual(result, 123)


if __name__ == "__main__":
    unittest.main()
