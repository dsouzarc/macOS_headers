//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction
{
    MKLocalSearch *_localSearch;
}

@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
- (void).cxx_destruct;
- (BOOL)shouldUseMetricSystem;
- (void)cancel;
- (void)runSearchWithLocation:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

