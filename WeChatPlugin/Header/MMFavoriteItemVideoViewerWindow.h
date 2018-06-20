//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoriteItemViewerWindow.h"

#import "NSSharingServiceDelegate.h"

@class AVPlayer, AVPlayerView, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MMFavoriteItemVideoViewerWindow : MMFavoriteItemViewerWindow <NSSharingServiceDelegate>
{
    AVPlayer *_player;
    AVPlayerView *_playerView;
    NSURL *_fileUrl;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) AVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)contentForSharing;
- (id)getVideoPath;
- (void)openWith:(id)arg1;
- (BOOL)isAVPlayerViewSupported;
- (void)initVideoView;
- (BOOL)initPlaying;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)supportedActions;
- (void)close;
- (void)showWindowAnimated:(BOOL)arg1;
- (struct CGSize)sizeForContent;
- (void)loadContent;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
