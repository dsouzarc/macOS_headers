//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSTextView;

@interface CalUITextFieldCell : NSTextFieldCell
{
    NSTextView *_fieldEditor;
}

- (void).cxx_destruct;
@property(retain) NSTextView *fieldEditor; // @synthesize fieldEditor=_fieldEditor;
- (id)fieldEditorForView:(id)arg1;
- (void)configureWithFont:(id)arg1 textColor:(id)arg2 linkColor:(id)arg3;
- (id)init;

@end

