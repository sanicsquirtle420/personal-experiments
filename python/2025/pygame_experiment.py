import pygame

def main():
    pygame.init()

    # sets up the dimensions for the window (600 x 700)
    screen = pygame.display.set_mode((600 , 700))
    font = pygame.font.SysFont("Arial" , 30)

    img = pygame.image.load("/home/raccoon/Pictures/neofetch_icons/juno1.jpg").convert()
    scaled_img = pygame.transform.scale(img , (550 , 550))
    text = font.render("Welcome to orbit!" , False , (0 , 0 , 0))

    # makes the background white
    screen.fill((255 , 255 , 255))
    # displays the scalled image
    screen.blit(scaled_img, (25, 25))
    # displays the text
    screen.blit(text , (175 , 600))
    pygame.display.flip()
    status: bool = True
    while status:
        for i in pygame.event.get():
            if i.type == pygame.QUIT:
                status = False

    pygame.quit()


if __name__ == "__main__":
    main()
