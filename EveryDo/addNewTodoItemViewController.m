//
//  AddNewTodoItemViewController.m
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import "AddNewTodoItemViewController.h"

@interface AddNewTodoItemViewController ()

@end

@implementation AddNewTodoItemViewController

- (IBAction)doneButtonDidPress:(id)sender {
    
    self.todoItem.title = self.todoItemTitle.text;
    self.todoItem.taskDescription = self.descriptionTextField.text;
    self.todoItem.priorityNumber = [self.priorityTextField.text intValue];
    [self.delegate didCreateNewItem:self.todoItem];
    
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    Todo *newItem = [[Todo alloc] init];
    self.todoItem = newItem;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
