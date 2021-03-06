//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUTextView.h"

#import "NSTextViewDelegate.h"

@class FLUTextEntityLabelTextStorage, NSColor, NSDictionary, NSLayoutManager, NSString, NSTextContainer;

@interface FLUTextEntityLabel : FLUTextView <NSTextViewDelegate>
{
    BOOL _disableMenu;
    BOOL _disableTranslateMenu;
    BOOL _hovering;
    BOOL _isMouseDown;
    BOOL _performMouseDownOnNextMouseUp;
    BOOL _performMouseUpAfterDelay;
    CDUnknownBlockType _detectionBlock;
    CDUnknownBlockType _translationBlock;
    CDUnknownBlockType _menuBlock;
    NSColor *_entityTextColor;
    NSLayoutManager *_customLayoutManager;
    NSTextContainer *_customTextContainer;
    FLUTextEntityLabelTextStorage *_customTextStorage;
    FLUTextView *_textView;
    NSString *_cleanText;
    NSDictionary *_textAttributes;
    NSDictionary *_hoverTextAttributes;
}

@property(retain, nonatomic) NSDictionary *hoverTextAttributes; // @synthesize hoverTextAttributes=_hoverTextAttributes;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain, nonatomic) NSString *cleanText; // @synthesize cleanText=_cleanText;
@property(retain, nonatomic) FLUTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) FLUTextEntityLabelTextStorage *customTextStorage; // @synthesize customTextStorage=_customTextStorage;
@property(retain, nonatomic) NSTextContainer *customTextContainer; // @synthesize customTextContainer=_customTextContainer;
@property(retain, nonatomic) NSLayoutManager *customLayoutManager; // @synthesize customLayoutManager=_customLayoutManager;
@property(nonatomic) BOOL performMouseUpAfterDelay; // @synthesize performMouseUpAfterDelay=_performMouseUpAfterDelay;
@property(nonatomic) BOOL performMouseDownOnNextMouseUp; // @synthesize performMouseDownOnNextMouseUp=_performMouseDownOnNextMouseUp;
@property(nonatomic) BOOL isMouseDown; // @synthesize isMouseDown=_isMouseDown;
@property(nonatomic, getter=isHovering) BOOL hovering; // @synthesize hovering=_hovering;
@property(nonatomic) BOOL disableTranslateMenu; // @synthesize disableTranslateMenu=_disableTranslateMenu;
@property(nonatomic) BOOL disableMenu; // @synthesize disableMenu=_disableMenu;
@property(retain, nonatomic) NSColor *entityTextColor; // @synthesize entityTextColor=_entityTextColor;
@property(copy, nonatomic) CDUnknownBlockType menuBlock; // @synthesize menuBlock=_menuBlock;
@property(copy, nonatomic) CDUnknownBlockType translationBlock; // @synthesize translationBlock=_translationBlock;
@property(copy, nonatomic) CDUnknownBlockType detectionBlock; // @synthesize detectionBlock=_detectionBlock;
- (void).cxx_destruct;
- (id)attributedString;
- (void)refreshView;
- (id)substringWithBoundingRect:(struct CGRect)arg1;
- (double)textHeightForWidth:(double)arg1;
- (double)textWidthForHeight:(double)arg1;
- (void)didPressCopyTextItem:(id)arg1;
- (void)didPressTranslateTextItem:(id)arg1;
- (void)openTranslationProviderURL:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)dealloc;
- (void)setupLabel;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clickEntityWithEvent:(id)arg1 longPress:(BOOL)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)removeHoverAttributesForRange:(struct _NSRange)arg1;
- (void)addHoverAttributesForType:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (void)checkForTextEntityHover:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)updateFrames:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setup;
- (id)defaultHoverAttributes;
- (id)defaultTextAttributes;
- (void)setLinkTextAttributes:(id)arg1;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)showWithText:(id)arg1 attributes:(id)arg2 hoverAttributes:(id)arg3;
- (id)defaultParagraphStyle;
- (void)didChangeDesignModeOption:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

