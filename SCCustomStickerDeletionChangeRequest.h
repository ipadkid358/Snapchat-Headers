/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCCDCustomStickerDeletion, SCObjectPlaceholder, NSString;

@interface SCCustomStickerDeletionChangeRequest : NSObject {

	SCCDCustomStickerDeletion* _customStickerDeletion;
	SCObjectPlaceholder* _objectPlaceholder;

}

@property (nonatomic,readonly) SCObjectPlaceholder * placeholderForCreatedCustomStickerDeletion; 
@property (nonatomic,copy,readonly) NSString * objectID; 
@property (assign,nonatomic) int numSyncFailed; 
@property (nonatomic,copy) NSString * stickerId; 
+(id)changeRequestForCustomStickerDeletion:(id)arg1 ;
+(id)creationRequestWithCustomStickerDeletion:(id)arg1 ;
+(void)deleteCustomStickerDeletions:(id)arg1 ;
+(void)deleteAllCustomStickerDeletions;
-(NSString *)stickerId;
-(void)setStickerId:(NSString *)arg1 ;
-(int)numSyncFailed;
-(void)setNumSyncFailed:(int)arg1 ;
-(id)initWithCustomStickerDeletion:(id)arg1 ;
-(SCObjectPlaceholder *)placeholderForCreatedCustomStickerDeletion;
-(void)setWithCustomStickerDeletion:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
-(NSString *)objectID;
@end

