//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand
{
    BOOL _canBeControlledByScrubbing;
}

@property(nonatomic) BOOL canBeControlledByScrubbing; // @synthesize canBeControlledByScrubbing=_canBeControlledByScrubbing;
- (id)newCommandEventWithPositionTime:(double)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end

