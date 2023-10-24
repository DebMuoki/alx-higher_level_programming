import math


class MagicClass:
    """
    This class defines a magic circle by radius.
    """

    def __init__(self, radius=0):
        """
        This method initializes the magic circle.
        """
        self.__radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise TypeError("radius must be a number")
        self.__radius = radius

    def area(self):
        """
        This method calculates the area of the magic circle.
        """
        return self.__radius ** 2 * math.pi

    def circumference(self):
        """
        This method calculates the circumference of the magic circle.
        """
        return 2 * math.pi * self.__radius
