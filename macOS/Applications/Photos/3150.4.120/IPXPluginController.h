//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXPluginManager, NSArray, NSMenu, NSMenuItem, RDVersion;
@protocol IPXPluginControllerDelegate;

@interface IPXPluginController : NSObject
{
    IPXPluginManager *_pluginManager;
    NSArray *_currentExtensionsInMenu;
    NSMenuItem *_pluginPrefsMenuItem;
    struct CGSize _iconSize;
    RDVersion *_primarySelection;
    NSMenu *_pluginsMenu;
    id <IPXPluginControllerDelegate> _delegate;
}

@property __weak id <IPXPluginControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMenu *pluginsMenu; // @synthesize pluginsMenu=_pluginsMenu;
@property(retain, nonatomic) RDVersion *primarySelection; // @synthesize primarySelection=_primarySelection;
- (void).cxx_destruct;
- (void)displayPluginPrefs:(id)arg1;
- (void)buildPreviewsForExternalEditingOfVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldBuildPreviewsForExternalEditingOfVersion:(id)arg1;
- (void)editWithPlugin:(id)arg1;
- (void)livePhotoWarningForEditingVersions:(id)arg1 extensionName:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updatePlugInMenuIfNecessary;
- (id)init;

@end

