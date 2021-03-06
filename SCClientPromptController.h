/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol SCPerforming;
@class NSDictionary, NSMutableDictionary;

@interface SCClientPromptController : NSObject <NSCoding> {

	os_unfair_lock_s _lock;
	NSDictionary* _shownPrompts;
	NSMutableDictionary* _showingPrompts;
	id<SCPerforming> _performer;

}

@property (nonatomic,retain) NSDictionary * shownPrompts;                       //@synthesize shownPrompts=_shownPrompts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * showingPrompts;              //@synthesize showingPrompts=_showingPrompts - In the implementation block
@property (nonatomic,retain) id<SCPerforming> performer;                        //@synthesize performer=_performer - In the implementation block
+(id)path;
+(id)shared;
-(id<SCPerforming>)performer;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(void)updateWithNewPrompts:(id)arg1 ;
-(void)clearPrompts;
-(id)initWithShownPrompts:(id)arg1 ;
-(void)_updateShownPromptToServer:(id)arg1 ;
-(void)_markPromptAsShown:(id)arg1 ;
-(void)attemptToShowPrompt:(id)arg1 withProvider:(/*^block*/id)arg2 userSession:(id)arg3 ;
-(NSDictionary *)shownPrompts;
-(void)setShownPrompts:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)showingPrompts;
-(void)setShowingPrompts:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)saveState;
@end

