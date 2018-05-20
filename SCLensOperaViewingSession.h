/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaEventListener.h>
#import <Snapchat/SCLensOperaViewingSessionProtocol.h>

@class SCLens, SCLensLogger, SCOperaViewController, NSString, NSDate;

@interface SCLensOperaViewingSession : NSObject <SCOperaEventListener, SCLensOperaViewingSessionProtocol> {

	SCLens* _lens;
	SCLensLogger* _lensLogger;
	SCOperaViewController* _operaVC;
	NSString* _lensSessionId;
	BOOL _videoPlaybackMuted;
	NSDate* _attachmentOpenTimestamp;
	double _attachmentViewOpened;
	double _timeInAttachmentView;
	double _playingAttachmentVideoStarted;
	double _timePlayingAttachmentVideo;
	double _mediaDurationSec;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(void)openAttachment;
-(void)closeAttachment;
-(BOOL)_shouldFireMetricsOnOpenAttachment;
-(void)_fireMetrics;
-(void)_logGeofilterAttachmentView:(BOOL)arg1 ;
-(void)_trackUnlockableAttachmentView;
-(id)initWithLens:(id)arg1 lensLogger:(id)arg2 operaVC:(id)arg3 ;
@end

