//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermMetalRendererTransientState.h"

@interface iTermBadgeRendererTransientState : iTermMetalRendererTransientState
{
    id <MTLTexture> _texture;
    struct CGSize _textureSizeInPoints;
    struct CGRect _sourceRect;
    struct CGRect _destinationRect;
}

@property(nonatomic) struct CGSize textureSizeInPoints; // @synthesize textureSizeInPoints=_textureSizeInPoints;
@property(retain, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (void).cxx_destruct;

@end

