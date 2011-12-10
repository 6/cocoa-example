//
//  PGGDocument.h
//  cocoa-example
//
//  Created by Peter Graham on 12/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PGGDocument : NSDocument <NSTableViewDataSource>
{
    NSMutableArray *todoItems;
    IBOutlet NSTableView *itemTableView;
}
- (IBAction)createNewItem:(id)sender;
@end
