/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCSearchSwipeStackAssetModel : NSObject <NSCopying> {

	NSString* _acceptButtonAssetName;
	NSString* _declineButtonAssetName;
	NSString* _yesOverlayAssetName;
	NSString* _noOverlayAssetName;
	NSString* _buttonsContainerAssetName;

}

@property (nonatomic,copy,readonly) NSString * acceptButtonAssetName;                  //@synthesize acceptButtonAssetName=_acceptButtonAssetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * declineButtonAssetName;                 //@synthesize declineButtonAssetName=_declineButtonAssetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * yesOverlayAssetName;                    //@synthesize yesOverlayAssetName=_yesOverlayAssetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * noOverlayAssetName;                     //@synthesize noOverlayAssetName=_noOverlayAssetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonsContainerAssetName;              //@synthesize buttonsContainerAssetName=_buttonsContainerAssetName - In the implementation block
-(id)initWithAcceptButtonAssetName:(id)arg1 declineButtonAssetName:(id)arg2 yesOverlayAssetName:(id)arg3 noOverlayAssetName:(id)arg4 buttonsContainerAssetName:(id)arg5 ;
-(NSString *)acceptButtonAssetName;
-(NSString *)declineButtonAssetName;
-(NSString *)yesOverlayAssetName;
-(NSString *)noOverlayAssetName;
-(NSString *)buttonsContainerAssetName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
