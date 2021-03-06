/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensesUIControllerState.h>
@class SCLens, NSString, SCLensLaunchData, SCMadeWithLensesInteractiveProcessedItem, NSArray;


@protocol SCLensesUIControllerState <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SCLens * lens; 
@property (nonatomic,copy,readonly) NSString * lensOptionId; 
@property (nonatomic,copy,readonly) SCLensLaunchData * snappablesLaunchData; 
@property (nonatomic,copy,readonly) SCMadeWithLensesInteractiveProcessedItem * galleryLensesProcessedItem; 
@property (nonatomic,copy,readonly) NSArray * assetsToPrefetch; 
@required
-(SCLens *)lens;
-(NSString *)lensOptionId;
-(NSArray *)assetsToPrefetch;
-(SCMadeWithLensesInteractiveProcessedItem *)galleryLensesProcessedItem;
-(SCLensLaunchData *)snappablesLaunchData;

@end


@class SCLens, NSString, SCLensLaunchData, SCMadeWithLensesInteractiveProcessedItem, NSArray;

@interface SCLensesUIControllerState : NSObject <SCLensesUIControllerState> {

	SCLens* _lens;
	NSString* _lensOptionId;
	SCLensLaunchData* _snappablesLaunchData;
	SCMadeWithLensesInteractiveProcessedItem* _galleryLensesProcessedItem;
	NSArray* _assetsToPrefetch;

}

@property (nonatomic,copy,readonly) SCLens * lens;                                                                      //@synthesize lens=_lens - In the implementation block
@property (nonatomic,copy,readonly) NSString * lensOptionId;                                                            //@synthesize lensOptionId=_lensOptionId - In the implementation block
@property (nonatomic,copy,readonly) SCLensLaunchData * snappablesLaunchData;                                            //@synthesize snappablesLaunchData=_snappablesLaunchData - In the implementation block
@property (nonatomic,copy,readonly) SCMadeWithLensesInteractiveProcessedItem * galleryLensesProcessedItem;              //@synthesize galleryLensesProcessedItem=_galleryLensesProcessedItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetsToPrefetch;                                                         //@synthesize assetsToPrefetch=_assetsToPrefetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(SCLens *)lens;
-(NSString *)lensOptionId;
-(NSArray *)assetsToPrefetch;
-(SCMadeWithLensesInteractiveProcessedItem *)galleryLensesProcessedItem;
-(SCLensLaunchData *)snappablesLaunchData;
-(id)initWithLens:(id)arg1 lensOptionId:(id)arg2 snappablesLaunchData:(id)arg3 galleryLensesProcessedItem:(id)arg4 assetsToPrefetch:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

