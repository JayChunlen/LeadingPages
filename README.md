# LeadingPages
easy to use
leadingPage = [[LeadingPageView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
        leadingPage.scrollDirection = 0;
        NSArray *images = SCREEN_HEIGHT == 480?@[@"guidepage1_640x960.jpg",
                                                 @"guidepage2_640x960.jpg",
                                                 @"guidepage3_640x960.jpg"]:
                                               @[@"guidepage1_640x1136.jpg",
                                                 @"guidepage2_640x1136.jpg",
                                                 @"guidepage3_640x1136.jpg"];
        leadingPage.images = images;
