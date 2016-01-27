//
//  AddNewTodoItemViewController.h
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Todo.h"

@protocol NewItemDelegate <NSObject>

-(void)didCreateNewItem:(Todo *)newItem;

@end

@interface AddNewTodoItemViewController : UIViewController

@property (nonatomic, strong) Todo *todoItem;

@property (nonatomic, weak) id <NewItemDelegate> delegate;

@property (weak, nonatomic) IBOutlet UITextField *todoItemTitle;

@property (weak, nonatomic) IBOutlet UITextField *descriptionTextField;

@property (weak, nonatomic) IBOutlet UITextField *priorityTextField;

@end
