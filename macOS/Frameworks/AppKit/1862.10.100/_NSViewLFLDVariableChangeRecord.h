//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSViewLFLDChangeRecord.h>

@class NSISVariable, NSView;

__attribute__((visibility("hidden")))
@interface _NSViewLFLDVariableChangeRecord : _NSViewLFLDChangeRecord
{
    NSISVariable *_variable;
    double _value;
    NSView *_variableDelegate;
}

@property(readonly, nonatomic) NSView *variableDelegate; // @synthesize variableDelegate=_variableDelegate;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) NSISVariable *variable; // @synthesize variable=_variable;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2;

@end

