//
//  ViewController.h
//  Persistencia_Realm.io
//
//  Created by joaquim on 16/03/15.
//  Copyright (c) 2015 joaquim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
                <UITableViewDataSource, UITableViewDelegate,UIImagePickerControllerDelegate>

@property (weak, nonatomic) IBOutlet UITextField *nomeTextField;
@property (weak, nonatomic) IBOutlet UITextField *tiaTextField;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIButton *botaoSalvar;

- (IBAction)salvar:(id)sender;
@end

