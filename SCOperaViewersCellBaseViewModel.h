/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCOperaViewersCellViewModelListenerAnnouncer;

@interface SCOperaViewersCellBaseViewModel : NSObject {

	SCOperaViewersCellViewModelListenerAnnouncer* _announcer;
	double _textAlpha;

}

@property (assign,nonatomic) double textAlpha;              //@synthesize textAlpha=_textAlpha - In the implementation block
-(void)reloadCell;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setTextAlpha:(double)arg1 ;
-(double)textAlpha;
@end

