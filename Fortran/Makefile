COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN):
	gfortran -o $(COLLEEN) colleen.f90

$(GRACE):
	gfortran -o $(GRACE) grace.f90

$(SULLY):
	gfortran -o $(SULLY) sully.f90

clean:
	rm -f $(COLLEEN)
	rm -f $(GRACE)
	rm -f $(SULLY)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
