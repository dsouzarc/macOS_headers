//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HexFiend/HFRepresenter.h>

@class NSMutableArray, NSTableView, NSView;

__attribute__((visibility("hidden")))
@interface DataInspectorRepresenter : HFRepresenter
{
    NSView *outletView;
    NSTableView *table;
    NSMutableArray *inspectors;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void).cxx_destruct;
- (void)controllerDidChange:(unsigned long long)arg1;
- (void)refreshTableValues;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)doubleClickedTable:(id)arg1;
- (void)removeRow:(id)arg1;
- (void)addRow:(id)arg1;
- (void)resizeTableViewAfterChangingRowCount;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)valueFromInspector:(id)arg1 isError:(char *)arg2;
- (long long)selectedByteCountForEditing;
- (long long)numberOfRowsInTableView:(id)arg1;
- (unsigned long long)rowCount;
- (void)initializeView;
- (id)createView;
- (void)saveDefaultInspectors;
- (void)loadDefaultInspectors;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

