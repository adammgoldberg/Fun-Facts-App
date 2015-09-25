//
//  ViewController.m
//  FunFacts
//
//  Created by Adam Goldberg on 2015-09-21.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#import "ViewController.h"
#import "Factbook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    self.factbook = [[Factbook alloc] init];
    self.colorwheel = [[ColorWheel alloc] init];
    
    UIColor *randomColor = [self.colorwheel randomColor];
    self.view.backgroundColor =  randomColor;
    self.funFactButton.tintColor = randomColor;
    self.funFactLabel.text = [self.factbook randomFact];

    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact {
    UIColor *randomColor = [self.colorwheel randomColor];
    self.view.backgroundColor =  randomColor;
    self.funFactButton.tintColor = randomColor;
    self.funFactLabel.text = [self.factbook randomFact];
}







@end
